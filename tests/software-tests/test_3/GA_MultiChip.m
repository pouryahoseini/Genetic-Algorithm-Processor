function [ one_population_best_found,time ] = GA_MultiChip(  )
%GA Specifications:
%Population: 32 , Iterations: 64 , 64 bit binary coded representation,
%Crossover probability: 111/128 , Mutation Probability: 25/128 , One point crossover,
%One point mutation , Tournament selection with 8 contestants

tic;
one_population_best_found=64;

%%%%%%%%%%%%%%%%%%%One population pattern%%%%%%%%%%%%%%%%%
    
%Initialization
ga_population(1:32,1:64)=randi(2,32,64)-1;
ga_cost=zeros(32,1);
OrderOf32=0;

i=1;
while i<33
    [ga_cost(i,1)]=cost_func(ga_population(i,:));
    i=i+1;
end

[best_found,best_index]=min(ga_cost);
one_population_best_found=min([one_population_best_found,min(ga_cost)]);

best_chromosome=ga_population(best_index,:);

iteration=1;
while iteration<128
    
%Parent Selection (Tournament)
contestants_index=randi(32,1,8);
[winner_cost,winner_index]=min(ga_cost(contestants_index,1));
child_1=ga_population(contestants_index(winner_index),:);
if rand<(31/(32*32))
child_1=best_chromosome;
end

contestants_index=randi(32,1,8);
[winner_cost,winner_index]=min(ga_cost(contestants_index,1));
child_2=ga_population(contestants_index(winner_index),:);
if rand<(31/(32*32))
child_2=best_chromosome;
end


%One point crossover
if rand<(111/128)
    x=randi(64);
    child_1(x:64)=child_2(x:64);
end


%One point mutation
%offspring 1
if rand<(25/128)
    x=randi(64);
    child_1(x)=abs(child_1(x)-1); %toggles selected bit
end


%Random Immigrants
    child_2=randi(2,1,64)-1;


%cost calculation
[child_1_cost]=cost_func(child_1);
[child_2_cost]=cost_func(child_2);


%Replacing oldest individuals by offspring
if iteration>(OrderOf32+1)*64
    OrderOf32=OrderOf32+1;
end

    ga_population(iteration-(64*OrderOf32),:)=child_1;
    ga_cost(iteration-(64*OrderOf32))=child_1_cost;
    ga_population(iteration-(64*OrderOf32)+1,:)=child_2;
    ga_cost(iteration-(64*OrderOf32)+1)=child_2_cost;
    one_population_best_found=min([one_population_best_found,child_1_cost,child_2_cost]);
    iteration=iteration+2;


end



%cost Function
function [ cost ] = cost_func( chromosome )
    a1=(chromosome(1,1)==1)&&(chromosome(1,2)==1);
    a2=(chromosome(1,3)==1)&&(chromosome(1,4)==1);
    a3=(chromosome(1,5)==1)&&(chromosome(1,6)==1);
    a4=(chromosome(1,7)==1)&&(chromosome(1,8)==1);
    a5=(chromosome(1,9)==1)&&(chromosome(1,10)==1);
    a6=(chromosome(1,11)==1)&&(chromosome(1,12)==1);
    a7=(chromosome(1,13)==1)&&(chromosome(1,14)==1);
    a8=(chromosome(1,15)==1)&&(chromosome(1,16)==1);
    a9=(chromosome(1,17)==1)&&(chromosome(1,18)==1);
    a10=(chromosome(1,19)==1)&&(chromosome(1,20)==1);
    a11=(chromosome(1,21)==1)&&(chromosome(1,22)==1);
    a12=(chromosome(1,23)==1)&&(chromosome(1,24)==1);
    a13=(chromosome(1,25)==1)&&(chromosome(1,26)==1);
    a14=(chromosome(1,27)==1)&&(chromosome(1,28)==1);
    a15=(chromosome(1,29)==1)&&(chromosome(1,30)==1);
    a16=(chromosome(1,31)==1)&&(chromosome(1,32)==1);
    a17=(chromosome(1,33)==1)&&(chromosome(1,34)==1);
    a18=(chromosome(1,35)==1)&&(chromosome(1,36)==1);
    a19=(chromosome(1,37)==1)&&(chromosome(1,38)==1);
    a20=(chromosome(1,39)==1)&&(chromosome(1,40)==1);
    a21=(chromosome(1,41)==1)&&(chromosome(1,42)==1);
    a22=(chromosome(1,43)==1)&&(chromosome(1,44)==1);
    a23=(chromosome(1,45)==1)&&(chromosome(1,46)==1);
    a24=(chromosome(1,47)==1)&&(chromosome(1,48)==1);
    a25=(chromosome(1,49)==1)&&(chromosome(1,50)==1);
    a26=(chromosome(1,51)==1)&&(chromosome(1,52)==1);
    a27=(chromosome(1,53)==1)&&(chromosome(1,54)==1);
    a28=(chromosome(1,55)==1)&&(chromosome(1,56)==1);
    a29=(chromosome(1,57)==1)&&(chromosome(1,58)==1);
    a30=(chromosome(1,59)==1)&&(chromosome(1,60)==1);
    a31=(chromosome(1,61)==1)&&(chromosome(1,62)==1);
    a32=(chromosome(1,63)==1)&&(chromosome(1,64)==1);
    
    
    a33=32*((chromosome(1,1)==1)&&(chromosome(1,2)==1)&&(chromosome(1,3)==1)&&(chromosome(1,4)==1)&&(chromosome(1,5)==1)&&(chromosome(1,6)==1)&&(chromosome(1,7)==1)&&(chromosome(1,8)==1)&&(chromosome(1,9)==1)&&(chromosome(1,10)==1)&&(chromosome(1,11)==1)&&(chromosome(1,12)==1)&&(chromosome(1,13)==1)&&(chromosome(1,14)==1)&&(chromosome(1,15)==1)&&(chromosome(1,16)==1)&&(chromosome(1,17)==1)&&(chromosome(1,18)==1)&&(chromosome(1,19)==1)&&(chromosome(1,20)==1)&&(chromosome(1,21)==1)&&(chromosome(1,22)==1)&&(chromosome(1,23)==1)&&(chromosome(1,24)==1)&&(chromosome(1,25)==1)&&(chromosome(1,26)==1)&&(chromosome(1,27)==1)&&(chromosome(1,28)==1)&&(chromosome(1,29)==1)&&(chromosome(1,30)==1)&&(chromosome(1,31)==1)&&(chromosome(1,32)==1)&&(chromosome(1,33)==1)&&(chromosome(1,34)==1)&&(chromosome(1,35)==1)&&(chromosome(1,36)==1)&&(chromosome(1,37)==1)&&(chromosome(1,38)==1)&&(chromosome(1,39)==1)&&(chromosome(1,40)==1)&&(chromosome(1,41)==1)&&(chromosome(1,42)==1)&&(chromosome(1,43)==1)&&(chromosome(1,44)==1)&&(chromosome(1,45)==1)&&(chromosome(1,46)==1)&&(chromosome(1,47)==1)&&(chromosome(1,48)==1)&&(chromosome(1,49)==1)&&(chromosome(1,50)==1)&&(chromosome(1,51)==1)&&(chromosome(1,52)==1)&&(chromosome(1,53)==1)&&(chromosome(1,54)==1)&&(chromosome(1,55)==1)&&(chromosome(1,56)==1)&&(chromosome(1,57)==1)&&(chromosome(1,58)==1)&&(chromosome(1,59)==1)&&(chromosome(1,60)==1)&&(chromosome(1,61)==1)&&(chromosome(1,62)==1)&&(chromosome(1,63)==1)&&(chromosome(1,64)==1));

    cost=64-(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12+a13+a14+a15+a16+a17+a18+a19+a20+a21+a22+a23+a24+a25+a26+a27+a28+a29+a30+a31+a32+a33)	;
    
           
end

time=toc;

end
