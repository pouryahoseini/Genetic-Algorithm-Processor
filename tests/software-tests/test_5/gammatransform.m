function [ gammaout, one_population_best_found ] = gammatransform( image )
%CAUTION: WORKS WITH DOUBLE IMAGE TYPES!
%GA Specifications:
%Population: 128 , Iterations: 128 , 16 bit chromosome,
%16 bit fitness, Crossover probability: 100/128 , 
%Mutation Probability: 7/128 , Two-point crossover,
%One point mutation , Tournament selection with 4 contestants,Elitism
%Enabled

one_population_best_found=0;

%%%%%%%%%%%%%%%%%%%One population pattern%%%%%%%%%%%%%%%%%
    
%Initialization
ga_population=zeros(128,16);
ga_population(1:128,1:16)=randi(2,128,16)-1;
ga_fitness=zeros(128,1);
OrderOf64=0;
OrderOf64_2=0;
gene_stash=zeros(1,16);

i=1;
while i<129
    [ga_fitness(i,1)]=Fitness_func(ga_population(i,:), image);
    i=i+1;
end

[best_found,best_index]=max(ga_fitness);
one_population_best_found=max([one_population_best_found,best_found]);

best_chromosome=ga_population(best_index,:);

iteration=1;
while iteration<129
    
%Parent Selection (Tournament)
contestants_index=randi(128,1,4);
[winner_fitness,winner_index]=max(ga_fitness(contestants_index,1));
child_1=ga_population(contestants_index(winner_index),:);
if rand<(1/128)
child_1=best_chromosome;
end


contestants_index=randi(128,1,4);
[winner_fitness,winner_index]=max(ga_fitness(contestants_index,1));
child_2=ga_population(contestants_index(winner_index),:);
if rand<(1/128)
child_2=best_chromosome;
end
          
%Two-Point crossover
if rand<(100/128)
    first_bound=randi(16);
    second_bound=randi(16);
    gene_stash(1:(max(first_bound,second_bound)-min(first_bound,second_bound)+1))=child_1(min(first_bound,second_bound):max(first_bound,second_bound));
    child_1(min(first_bound,second_bound):max(first_bound,second_bound))=child_2(min(first_bound,second_bound):max(first_bound,second_bound));
    child_2(min(first_bound,second_bound):max(first_bound,second_bound))=gene_stash(1:(max(first_bound,second_bound)-min(first_bound,second_bound)+1));
end


%One point mutation
%offspring 1
if rand<(7/128)
    x=randi(16);
    child_1(x)=abs(child_1(x)-1); %toggles selected bit
end

if rand<(7/128)
    x=randi(16);
    child_2(x)=abs(child_2(x)-1); %toggles selected bit
end

%Random Immigrants
if (mod(iteration,4)==0)
    child_2=randi(2,1,16)-1;
end

%Fitness calculation
[child_1_fitness]=Fitness_func(child_1, image);
[child_2_fitness]=Fitness_func(child_2, image);

%Replacing oldest individuals by offspring
if iteration>(OrderOf64+1)*128
    OrderOf64=OrderOf64+1;
end

if (iteration+1)>(OrderOf64_2+1)*128
    OrderOf64_2=OrderOf64_2+1;
end


    ga_population(iteration-(128*OrderOf64),:)=child_1;
    ga_fitness(iteration-(128*OrderOf64))=child_1_fitness;


    ga_population(iteration-(128*OrderOf64_2)+1,:)=child_2;
    ga_fitness(iteration-(128*OrderOf64_2)+1)=child_2_fitness;


    [best_found,best_index]=max(ga_fitness);
    best_chromosome=ga_population(best_index,:);
    one_population_best_found=max([one_population_best_found,best_found]);
    

    iteration=iteration+1;

end

gammaout=best_chromosome(1)+(2*best_chromosome(2))+(4*best_chromosome(3))+(8*best_chromosome(4))+(16*best_chromosome(5))+(32*best_chromosome(6))+(64*best_chromosome(7))+(128*best_chromosome(8))+(256*best_chromosome(9))+(512*best_chromosome(10))+(1024*best_chromosome(11))+(2048*best_chromosome(12))+(4096*best_chromosome(13))+(8192*best_chromosome(14))+(16384*best_chromosome(15))+(32768*best_chromosome(16));

end

%Fitness Function
function [ fitness ] = Fitness_func( chromosome, image )
    
    gammavalue=chromosome(1)+(2*chromosome(2))+(4*chromosome(3))+(8*chromosome(4))+(16*chromosome(5))+(32*chromosome(6))+(64*chromosome(7))+(128*chromosome(8))+(256*chromosome(9))+(512*chromosome(10))+(1024*chromosome(11))+(2048*chromosome(12))+(4096*chromosome(13))+(8192*chromosome(14))+(16384*chromosome(15))+(32768*chromosome(16));
    gammavalue=gammavalue/10000;
    
    p_image=image.^gammavalue;
    p_image=im2uint8(p_image);
    
    fitness=1000*((std2(p_image)*entropy(p_image)*(mean2(abs(imfilter(p_image,fspecial('sobel')))+abs(imfilter(p_image,fspecial('sobel')')))))^(1/3));
           
end
