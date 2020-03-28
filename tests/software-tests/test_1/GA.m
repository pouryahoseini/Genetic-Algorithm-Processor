function [ one_population_best_found ] = GA(  )
%GA Specifications:
%Population: 128 , Iterations: 128 , 30 bit binary coded representation,
%Crossover probability: 100/128 , Mutation Probability: 7/128 , Two-point crossover,
%One point mutation , Tournament selection with 4 contestants,Elitism
%Enabled

one_population_best_found=0;

%%%%%%%%%%%%%%%%%%%One population pattern%%%%%%%%%%%%%%%%%
    
%Initialization
ga_population=zeros(128,30);
ga_population(1:128,1:30)=randi(2,128,30)-1;
ga_fitness=zeros(128,1);
OrderOf64=0;
OrderOf64_2=0;
gene_stash=zeros(1,30);

i=1;
while i<129
    [ga_fitness(i,1),discard]=Fitness_func(ga_population(i,:));
if (discard==0)
    i=i+1;
else
    ga_population(i,:)=randi(2,1,30)-1;
end
end

[best_found,best_index]=max(ga_fitness);
one_population_best_found=max([one_population_best_found,best_found]);

best_chromosome=ga_population(best_index,:);

missed_replacement=0;
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
    first_bound=randi(30);
    second_bound=randi(30);
    gene_stash(1:(max(first_bound,second_bound)-min(first_bound,second_bound)+1))=child_1(min(first_bound,second_bound):max(first_bound,second_bound));
    child_1(min(first_bound,second_bound):max(first_bound,second_bound))=child_2(min(first_bound,second_bound):max(first_bound,second_bound));
    child_2(min(first_bound,second_bound):max(first_bound,second_bound))=gene_stash(1:(max(first_bound,second_bound)-min(first_bound,second_bound)+1));
end


%One point mutation
%offspring 1
if rand<(7/128)
    x=randi(30);
    child_1(x)=abs(child_1(x)-1); %toggles selected bit
end

if rand<(7/128)
    x=randi(30);
    child_2(x)=abs(child_2(x)-1); %toggles selected bit
end

%Random Immigrants
if (mod(iteration,4)==0)
    child_2=randi(2,1,30)-1;
end

%Fitness calculation
[child_1_fitness,child1_discard]=Fitness_func(child_1);
[child_2_fitness,child2_discard]=Fitness_func(child_2);

%Replacing oldest individuals by offspring
if iteration>(OrderOf64+1)*128
    OrderOf64=OrderOf64+1;
end

if (iteration+1)>(OrderOf64_2+1)*128
    OrderOf64_2=OrderOf64_2+1;
end

if (child1_discard==0)
    ga_population(iteration-(128*OrderOf64),:)=child_1;
    ga_fitness(iteration-(128*OrderOf64))=child_1_fitness;
else
    missed_replacement=missed_replacement+1;
end

if (child2_discard==0)
    ga_population(iteration-(128*OrderOf64_2)+1,:)=child_2;
    ga_fitness(iteration-(128*OrderOf64_2)+1)=child_2_fitness;
else
    missed_replacement=missed_replacement+1;
end

    [best_found,best_index]=max(ga_fitness);
    best_chromosome=ga_population(best_index,:);
    one_population_best_found=max([one_population_best_found,best_found]);
    
if missed_replacement>1
    missed_replacement=missed_replacement-2;
else
    iteration=iteration+1;
end


end

end

%Fitness Function
function [ fitness, discard ] = Fitness_func( chromosome )
    a1=(2*(chromosome(1,2)==1))+(chromosome(1,1)==1)+(8*((chromosome(1,2)==1)||(chromosome(1,1)==1)))	;
    a2=(2*(chromosome(1,4)==1))+(chromosome(1,3)==1)+(8*((chromosome(1,4)==1)||(chromosome(1,3)==1)))	;
    a3=(2*(chromosome(1,6)==1))+(chromosome(1,5)==1)+(8*((chromosome(1,6)==1)||(chromosome(1,5)==1)))	;

    a4=(2*(chromosome(1,8)==1))+(chromosome(1,7)==1)+(16*((chromosome(1,8)==1)||(chromosome(1,7)==1)))	;
    a5=(2*(chromosome(1,10)==1))+(chromosome(1,9)==1)+(16*((chromosome(1,10)==1)||(chromosome(1,9)==1)))	;
    a6=(2*(chromosome(1,12)==1))+(chromosome(1,11)==1)+(16*((chromosome(1,12)==1)||(chromosome(1,11)==1)))	;

    a7=(2*(chromosome(1,14)==1))+(chromosome(1,13)==1)+(24*((chromosome(1,14)==1)||(chromosome(1,13)==1)))	;
    a8=(2*(chromosome(1,16)==1))+(chromosome(1,15)==1)+(24*((chromosome(1,16)==1)||(chromosome(1,15)==1)))	;
    a9=(2*(chromosome(1,18)==1))+(chromosome(1,17)==1)+(24*((chromosome(1,18)==1)||(chromosome(1,17)==1)))	;

    a10=(2*(chromosome(1,20)==1))+(chromosome(1,19)==1)+(40*((chromosome(1,20)==1)||(chromosome(1,19)==1)))	;
    a11=(2*(chromosome(1,22)==1))+(chromosome(1,21)==1)+(40*((chromosome(1,22)==1)||(chromosome(1,21)==1)))	;
    a12=(2*(chromosome(1,24)==1))+(chromosome(1,23)==1)+(40*((chromosome(1,24)==1)||(chromosome(1,23)==1)))	;

    a13=(2*(chromosome(1,26)==1))+(chromosome(1,25)==1)+(56*((chromosome(1,26)==1)||(chromosome(1,25)==1)))	;
    a14=(2*(chromosome(1,28)==1))+(chromosome(1,27)==1)+(56*((chromosome(1,28)==1)||(chromosome(1,27)==1)))	;
    a15=(2*(chromosome(1,30)==1))+(chromosome(1,29)==1)+(56*((chromosome(1,30)==1)||(chromosome(1,29)==1)))	;

    fitness=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12+a13+a14+a15	;
    
    if (fitness>450)
        discard=1;
    else
        discard=0;
    end
        
end
