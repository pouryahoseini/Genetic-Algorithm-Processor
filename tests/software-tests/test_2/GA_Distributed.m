function [ one_population_best_found, time ] = GA_Distributed(  )
%GA Specifications:
%Population: 64 , Iterations: 16 , 30 bit binary coded representation,
%Crossover probability: 113/128 , Mutation Probability: 3/128 , Uniform crossover,
%Uniform mutation , Tournament selection with 2 contestants

tic;
migration_enable=0;

%Initialization

%1
one_population_best_found=0;
ga_population(1:64,1:30)=randi(2,64,30)-1;
ga_fitness=zeros(64,1);
OrderOf64=0;

i=1;
while i<65
    [ga_fitness(i,1),discard]=Fitness_func(ga_population(i,:));
if (discard==0)
    i=i+1;
else
    ga_population(i,:)=randi(2,1,30)-1;
end
end

[best_found,best_index]=max(ga_fitness);
best_chromosome=ga_population(best_index,:);
one_population_best_found=max([one_population_best_found,max(ga_fitness)]);

%2
one_population_best_found_2=0;
ga_population_2(1:64,1:30)=randi(2,64,30)-1;
ga_fitness_2=zeros(64,1);
OrderOf64_2=0;

i=1;
while i<65
    [ga_fitness_2(i,1),discard]=Fitness_func(ga_population_2(i,:));
if (discard==0)
    i=i+1;
else
    ga_population_2(i,:)=randi(2,1,30)-1;
end
end

[best_found_2,best_index_2]=max(ga_fitness_2);
best_chromosome_2=ga_population_2(best_index_2,:);
one_population_best_found_2=max([one_population_best_found_2,max(ga_fitness_2)]);


iteration_1=1;
iteration_2=1;
iteration=1;
while iteration<32
    
%Parent Selection (Tournament)
%1
contestants_index=randi(64,1,2);
[winner_fitness,winner_index]=max(ga_fitness(contestants_index,1));
child_1=ga_population(contestants_index(winner_index),:);


contestants_index=randi(64,1,2);
[winner_fitness,winner_index]=max(ga_fitness(contestants_index,1));
child_2=ga_population(contestants_index(winner_index),:);

%2
contestants_index_2=randi(64,1,2);
[winner_fitness_2,winner_index_2]=max(ga_fitness_2(contestants_index_2,1));
child_1_2=ga_population_2(contestants_index_2(winner_index_2),:);


contestants_index_2=randi(64,1,2);
[winner_fitness_2,winner_index_2]=max(ga_fitness_2(contestants_index_2,1));
child_2_2=ga_population_2(contestants_index_2(winner_index_2),:);

          
%Uniform crossover
%1
for gene_counter=1:30
    if rand<(113/128)
        crossover_stash=child_1(gene_counter:30);
        child_1(gene_counter:30)=child_2(gene_counter:30);
        child_2(gene_counter:30)=crossover_stash;
    end
end

%2
for gene_counter=1:30
    if rand<(113/128)
        crossover_stash=child_1_2(gene_counter:30);
        child_1_2(gene_counter:30)=child_2_2(gene_counter:30);
        child_2_2(gene_counter:30)=crossover_stash;
    end
end



%Uniform mutation
%1
%offspring 1
for gene_counter=1:30
    if rand<(7/128)
        child_1(gene_counter)=abs(child_1(gene_counter)-1); %toggles selected bit
    end
end
%offspring 2
for gene_counter=1:30
    if rand<(7/128)
    child_2(gene_counter)=abs(child_2(gene_counter)-1); %toggles selected bit
    end
end

%2
%offspring 1
for gene_counter=1:30
    if rand<(7/128)
        child_1_2(gene_counter)=abs(child_1_2(gene_counter)-1); %toggles selected bit
    end
end
%offspring 2
for gene_counter=1:30
    if rand<(7/128)
    child_2_2(gene_counter)=abs(child_2_2(gene_counter)-1); %toggles selected bit
    end
end


%Fitness calculation
%1
[child_1_fitness,child1_discard]=Fitness_func(child_1);
[child_2_fitness,child2_discard]=Fitness_func(child_2);

%2
[child_1_fitness_2,child1_discard_2]=Fitness_func(child_1_2);
[child_2_fitness_2,child2_discard_2]=Fitness_func(child_2_2);


%Replacing oldest individuals by offspring
%1
if iteration_1>(OrderOf64+1)*128
    OrderOf64=OrderOf64+1;
end

if (child1_discard==0)&&(child2_discard==0)
    ga_population(iteration_1-(128*OrderOf64),:)=child_1;
    ga_fitness(iteration_1-(128*OrderOf64))=child_1_fitness;
    ga_population(iteration_1-(128*OrderOf64)+1,:)=child_2;
    ga_fitness(iteration_1-(128*OrderOf64)+1)=child_2_fitness;
    [best_found,best_index]=max(ga_fitness);
    best_chromosome=ga_population(best_index,:);
    one_population_best_found=max([one_population_best_found,child_1_fitness,child_2_fitness]);
    iteration_1=iteration_1+2;
end

%2
if iteration_2>(OrderOf64_2+1)*128
    OrderOf64_2=OrderOf64_2+1;
end

if (child1_discard_2==0)&&(child2_discard_2==0)
    ga_population_2(iteration_2-(128*OrderOf64_2),:)=child_1_2;
    ga_fitness_2(iteration_2-(128*OrderOf64_2))=child_1_fitness_2;
    ga_population_2(iteration_2-(128*OrderOf64_2)+1,:)=child_2_2;
    ga_fitness_2(iteration_2-(128*OrderOf64_2)+1)=child_2_fitness_2;
    [best_found_2,best_index_2]=max(ga_fitness_2);
    best_chromosome_2=ga_population_2(best_index_2,:);
    one_population_best_found_2=max([one_population_best_found_2,child_1_fitness_2,child_2_fitness_2]);
    iteration_2=iteration_2+2;
end

if (migration_enable==1)
    ga_population(iteration_1-(128*OrderOf64),:)=best_chromosome_2;
    ga_fitness(iteration_1-(128*OrderOf64))=one_population_best_found_2;
    ga_population_2(iteration_2-(128*OrderOf64_2),:)=best_chromosome;
    ga_fitness_2(iteration_2-(128*OrderOf64_2))=one_population_best_found;
    iteration_1=iteration_1+1;
    iteration_2=iteration_2+1;
end
    
migration_enable=abs(migration_enable-1); %toggles selected bit
iteration=max(iteration_1,iteration_2);

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

time=toc;

end
