function [ Average_Best_Founds, Population_1_best_found, Population_2_best_found, Population_3_best_found, Population_4_best_found ] = GA_4thTest(  )
%GA Specifications:
%Population: 256 , Iterations: 256 , 256 bit binary coded representation,
%Crossover probability: 89/128 , Mutation Probability: 11/128 , Uniform crossover,
%Uniform mutation , Tournament selection with 16 contestants, Elitism
%Enabled, Bidirectional Ring Parallel Processing with the Frequency of 4
%Iterations, Random Immigrants Frequency of 2 Iterations

%For C Conversion
ga_population_1=zeros(256,256);
ga_population_2=zeros(256,256);
ga_population_3=zeros(256,256);
ga_population_4=zeros(256,256);

Population_1_best_found=256;
Population_2_best_found=256;
Population_3_best_found=256;
Population_4_best_found=256;


%%%%%%%%%%%%%%%%%%%One population pattern%%%%%%%%%%%%%%%%%
    
%Initialization
%1
ga_population_1(1:256,1:256)=randi(2,256,256)-1;
ga_cost_1=zeros(256,1);

i=1;
while i<257
    [ga_cost_1(i,1)]=cost_func(ga_population_1(i,:));
    i=i+1;
end

[best_found_1,best_index_1]=min(ga_cost_1);
Population_1_best_found=min([Population_1_best_found,best_found_1]);

best_chromosome_1=ga_population_1(best_index_1,:);


%2
ga_population_2(1:256,1:256)=randi(2,256,256)-1;
ga_cost_2=zeros(256,1);

i=1;
while i<257
    [ga_cost_2(i,1)]=cost_func(ga_population_2(i,:));
    i=i+1;
end

[best_found_2,best_index_2]=min(ga_cost_2);
Population_2_best_found=min([Population_2_best_found,best_found_2]);

best_chromosome_2=ga_population_2(best_index_2,:);


%3
ga_population_3(1:256,1:256)=randi(2,256,256)-1;
ga_cost_3=zeros(256,1);

i=1;
while i<257
    [ga_cost_3(i,1)]=cost_func(ga_population_3(i,:));
    i=i+1;
end

[best_found_3,best_index_3]=min(ga_cost_3);
Population_3_best_found=min([Population_3_best_found,best_found_3]);

best_chromosome_3=ga_population_3(best_index_3,:);


%4
ga_population_4(1:256,1:256)=randi(2,256,256)-1;
ga_cost_4=zeros(256,1);

i=1;
while i<257
    [ga_cost_4(i,1)]=cost_func(ga_population_4(i,:));
    i=i+1;
end

[best_found_4,best_index_4]=min(ga_cost_4);
Population_4_best_found=min([Population_4_best_found,best_found_4]);

best_chromosome_4=ga_population_4(best_index_4,:);


memory_address=1;
next_memory_address=2;


%Main Loop
for iteration=1:256
    
%Parent Selection (Tournament)
%1
contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_1(contestants_index,1));
population_1_child_1=ga_population_1(contestants_index(winner_index),:);
if rand<(1/(256))
population_1_child_1=best_chromosome_1;
end

contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_1(contestants_index,1));
population_1_child_2=ga_population_1(contestants_index(winner_index),:);
if rand<(1/(256))
population_1_child_2=best_chromosome_1;
end

%2
contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_2(contestants_index,1));
population_2_child_1=ga_population_2(contestants_index(winner_index),:);
if rand<(1/(256))
population_2_child_1=best_chromosome_2;
end

contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_2(contestants_index,1));
population_2_child_2=ga_population_2(contestants_index(winner_index),:);
if rand<(1/(256))
population_2_child_2=best_chromosome_2;
end

%3
contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_3(contestants_index,1));
population_3_child_1=ga_population_3(contestants_index(winner_index),:);
if rand<(1/(256))
population_3_child_1=best_chromosome_3;
end

contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_3(contestants_index,1));
population_3_child_2=ga_population_3(contestants_index(winner_index),:);
if rand<(1/(256))
population_3_child_2=best_chromosome_3;
end

%4
contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_4(contestants_index,1));
population_4_child_1=ga_population_4(contestants_index(winner_index),:);
if rand<(1/(256))
population_4_child_1=best_chromosome_4;
end

contestants_index=randi(256,1,16);
[winner_cost,winner_index]=min(ga_cost_4(contestants_index,1));
population_4_child_2=ga_population_4(contestants_index(winner_index),:);
if rand<(1/(256))
population_4_child_2=best_chromosome_4;
end


%Uniform Crossover
%1
for gene_counter=1:256
    if rand<(89/128)
        crossover_stash=population_1_child_1(gene_counter);
        population_1_child_1(gene_counter)=population_1_child_2(gene_counter);
        population_1_child_2(gene_counter)=crossover_stash;
    end
end

%2
for gene_counter=1:256
    if rand<(89/128)
        crossover_stash=population_2_child_1(gene_counter);
        population_2_child_1(gene_counter)=population_2_child_2(gene_counter);
        population_2_child_2(gene_counter)=crossover_stash;
    end
end

%3
for gene_counter=1:256
    if rand<(89/128)
        crossover_stash=population_3_child_1(gene_counter);
        population_3_child_1(gene_counter)=population_3_child_2(gene_counter);
        population_3_child_2(gene_counter)=crossover_stash;
    end
end

%4
for gene_counter=1:256
    if rand<(89/128)
        crossover_stash=population_4_child_1(gene_counter);
        population_4_child_1(gene_counter)=population_4_child_2(gene_counter);
        population_4_child_2(gene_counter)=crossover_stash;
    end
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Uniform Mutation
%1
%offspring 1
for gene_counter=1:256
    if rand<(11/128)
        population_1_child_1(gene_counter)=abs(population_1_child_1(gene_counter)-1); %toggles selected bit
    end
end
%offspring 2
for gene_counter=1:256
    if rand<(11/128)
    population_1_child_2(gene_counter)=abs(population_1_child_2(gene_counter)-1); %toggles selected bit
    end
end

%2
%offspring 1
for gene_counter=1:256
    if rand<(11/128)
        population_2_child_1(gene_counter)=abs(population_2_child_1(gene_counter)-1); %toggles selected bit
    end
end
%offspring 2
for gene_counter=1:256
    if rand<(11/128)
    population_2_child_2(gene_counter)=abs(population_2_child_2(gene_counter)-1); %toggles selected bit
    end
end


%3
%offspring 1
for gene_counter=1:256
    if rand<(11/128)
        population_3_child_1(gene_counter)=abs(population_3_child_1(gene_counter)-1); %toggles selected bit
    end
end
%offspring 2
for gene_counter=1:256
    if rand<(11/128)
    population_3_child_2(gene_counter)=abs(population_3_child_2(gene_counter)-1); %toggles selected bit
    end
end


%4
%offspring 1
for gene_counter=1:256
    if rand<(11/128)
        population_4_child_1(gene_counter)=abs(population_4_child_1(gene_counter)-1); %toggles selected bit
    end
end
%offspring 2
for gene_counter=1:256
    if rand<(11/128)
    population_4_child_2(gene_counter)=abs(population_4_child_2(gene_counter)-1); %toggles selected bit
    end
end


%Random Immigrants
if  (mod(iteration,2)==0)
    population_1_child_2=randi(2,1,256)-1;
    population_2_child_2=randi(2,1,256)-1;
    population_3_child_2=randi(2,1,256)-1;
    population_4_child_2=randi(2,1,256)-1;
end


%cost calculation
%1
[population_1_child_1_cost]=cost_func(population_1_child_1);
[population_1_child_2_cost]=cost_func(population_1_child_2);

%2
[population_2_child_1_cost]=cost_func(population_2_child_1);
[population_2_child_2_cost]=cost_func(population_2_child_2);

%3
[population_3_child_1_cost]=cost_func(population_3_child_1);
[population_3_child_2_cost]=cost_func(population_3_child_2);

%4
[population_4_child_1_cost]=cost_func(population_4_child_1);
[population_4_child_2_cost]=cost_func(population_4_child_2);


%Replacing oldest individuals by offspring
if memory_address>256
    memory_address=memory_address-256;
end

if next_memory_address>256
    next_memory_address=next_memory_address-256;
end

    %1
    ga_population_1(memory_address,:)=population_1_child_1;
    ga_cost_1(memory_address,1)=population_1_child_1_cost;
    ga_population_1(next_memory_address,:)=population_1_child_2;
    ga_cost_1(next_memory_address,1)=population_1_child_2_cost;
    
    %2
    ga_population_2(memory_address,:)=population_2_child_1;
    ga_cost_2(memory_address,1)=population_2_child_1_cost;
    ga_population_2(next_memory_address,:)=population_2_child_2;
    ga_cost_2(next_memory_address,1)=population_2_child_2_cost;
    
    %3
    ga_population_3(memory_address,:)=population_3_child_1;
    ga_cost_3(memory_address,1)=population_3_child_1_cost;
    ga_population_3(next_memory_address,:)=population_3_child_2;
    ga_cost_3(next_memory_address,1)=population_3_child_2_cost;
    
    %4
    ga_population_4(memory_address,:)=population_4_child_1;
    ga_cost_4(memory_address,1)=population_4_child_1_cost;
    ga_population_4(next_memory_address,:)=population_4_child_2;
    ga_cost_4(next_memory_address,1)=population_4_child_2_cost;
    
    
    memory_address=memory_address+2;
    next_memory_address=next_memory_address+2;

%Coarse-Grained Parallel Processing (Migration)

if (mod(iteration,4)==0)

    if memory_address>256
        memory_address=memory_address-256;
    end
    
    if next_memory_address>256
        next_memory_address=next_memory_address-256;
    end

   %1
   ga_population_1(memory_address,:)=population_4_child_1;
   ga_cost_1(memory_address,1)=population_4_child_1_cost;
   
   ga_population_1(next_memory_address,:)=population_2_child_1;
   ga_cost_1(next_memory_address,1)=population_2_child_1_cost;
       
   %2
   ga_population_2(memory_address,:)=population_1_child_1;
   ga_cost_2(memory_address,1)=population_1_child_1_cost;
   
   ga_population_2(next_memory_address,:)=population_3_child_1;
   ga_cost_2(next_memory_address,1)=population_3_child_1_cost;
   
   %3
   ga_population_3(memory_address,:)=population_2_child_1;
   ga_cost_3(memory_address,1)=population_2_child_1_cost;
   
   ga_population_3(next_memory_address,:)=population_4_child_1;
   ga_cost_3(next_memory_address,1)=population_4_child_1_cost;
     
   %4
   ga_population_4(memory_address,:)=population_3_child_1;
   ga_cost_4(memory_address,1)=population_3_child_1_cost;
   
   ga_population_4(next_memory_address,:)=population_1_child_1;
   ga_cost_4(next_memory_address,1)=population_1_child_1_cost;
   
   
   memory_address=memory_address+2;
   next_memory_address=next_memory_address+2;

end


%%%%Calculating the best found
%1
[best_found_1,best_index_1]=min(ga_cost_1);
best_chromosome_1=ga_population_1(best_index_1,:);
Population_1_best_found=min([Population_1_best_found,best_found_1]);

%2
[best_found_2,best_index_2]=min(ga_cost_2);
best_chromosome_2=ga_population_2(best_index_2,:);
Population_2_best_found=min([Population_2_best_found,best_found_2]);

%3
[best_found_3,best_index_3]=min(ga_cost_3);
best_chromosome_3=ga_population_3(best_index_3,:);
Population_3_best_found=min([Population_3_best_found,best_found_3]);

%4
[best_found_4,best_index_4]=min(ga_cost_4);
best_chromosome_4=ga_population_4(best_index_4,:);
Population_4_best_found=min([Population_4_best_found,best_found_4]);
   

end

Average_Best_Founds=mean([Population_1_best_found, Population_2_best_found, Population_3_best_found, Population_4_best_found]);

end

%cost Function
function [ cost ] = cost_func( chromosome )
    a1=chromosome(1,1)&&chromosome(1,2);
    a2=chromosome(1,3)&&chromosome(1,4);
    a3=chromosome(1,5)&&chromosome(1,6);
    a4=chromosome(1,7)&&chromosome(1,8);
    a5=chromosome(1,9)&&chromosome(1,10);
    a6=chromosome(1,11)&&chromosome(1,12);
    a7=chromosome(1,13)&&chromosome(1,14);
    a8=chromosome(1,15)&&chromosome(1,16);
    a9=chromosome(1,17)&&chromosome(1,18);
    a10=chromosome(1,19)&&chromosome(1,20);
    a11=chromosome(1,21)&&chromosome(1,22);
    a12=chromosome(1,23)&&chromosome(1,24);
    a13=chromosome(1,25)&&chromosome(1,26);
    a14=chromosome(1,27)&&chromosome(1,28);
    a15=chromosome(1,29)&&chromosome(1,30);
    a16=chromosome(1,31)&&chromosome(1,32);
    a17=chromosome(1,33)&&chromosome(1,34);
    a18=chromosome(1,35)&&chromosome(1,36);
    a19=chromosome(1,37)&&chromosome(1,38);
    a20=chromosome(1,39)&&chromosome(1,40);
    a21=chromosome(1,41)&&chromosome(1,42);
    a22=chromosome(1,43)&&chromosome(1,44);
    a23=chromosome(1,45)&&chromosome(1,46);
    a24=chromosome(1,47)&&chromosome(1,48);
    a25=chromosome(1,49)&&chromosome(1,50);
    a26=chromosome(1,51)&&chromosome(1,52);
    a27=chromosome(1,53)&&chromosome(1,54);
    a28=chromosome(1,55)&&chromosome(1,56);
    a29=chromosome(1,57)&&chromosome(1,58);
    a30=chromosome(1,59)&&chromosome(1,60);
    a31=chromosome(1,61)&&chromosome(1,62);
    a32=chromosome(1,63)&&chromosome(1,64);
    a33=chromosome(1,65)&&chromosome(1,66);
    a34=chromosome(1,67)&&chromosome(1,68);
    a35=chromosome(1,69)&&chromosome(1,70);
    a36=chromosome(1,71)&&chromosome(1,72);
    a37=chromosome(1,73)&&chromosome(1,74);
    a38=chromosome(1,75)&&chromosome(1,76);
    a39=chromosome(1,77)&&chromosome(1,78);
    a40=chromosome(1,79)&&chromosome(1,80);
    a41=chromosome(1,81)&&chromosome(1,82);
    a42=chromosome(1,83)&&chromosome(1,84);
    a43=chromosome(1,85)&&chromosome(1,86);
    a44=chromosome(1,87)&&chromosome(1,88);
    a45=chromosome(1,89)&&chromosome(1,90);
    a46=chromosome(1,91)&&chromosome(1,92);
    a47=chromosome(1,93)&&chromosome(1,94);
    a48=chromosome(1,95)&&chromosome(1,96);
    a49=chromosome(1,97)&&chromosome(1,98);
    a50=chromosome(1,99)&&chromosome(1,100);
    a51=chromosome(1,101)&&chromosome(1,102);
    a52=chromosome(1,103)&&chromosome(1,104);
    a53=chromosome(1,105)&&chromosome(1,106);
    a54=chromosome(1,107)&&chromosome(1,108);
    a55=chromosome(1,109)&&chromosome(1,110);
    a56=chromosome(1,111)&&chromosome(1,112);
    a57=chromosome(1,113)&&chromosome(1,114);
    a58=chromosome(1,115)&&chromosome(1,116);
    a59=chromosome(1,117)&&chromosome(1,118);
    a60=chromosome(1,119)&&chromosome(1,120);
    a61=chromosome(1,121)&&chromosome(1,122);
    a62=chromosome(1,123)&&chromosome(1,124);
    a63=chromosome(1,125)&&chromosome(1,126);
    a64=chromosome(1,127)&&chromosome(1,128);
    a65=chromosome(1,129)&&chromosome(1,130);
    a66=chromosome(1,131)&&chromosome(1,132);
    a67=chromosome(1,133)&&chromosome(1,134);
    a68=chromosome(1,135)&&chromosome(1,136);
    a69=chromosome(1,137)&&chromosome(1,138);
    a70=chromosome(1,139)&&chromosome(1,140);
    a71=chromosome(1,141)&&chromosome(1,142);
    a72=chromosome(1,143)&&chromosome(1,144);
    a73=chromosome(1,145)&&chromosome(1,146);
    a74=chromosome(1,147)&&chromosome(1,148);
    a75=chromosome(1,149)&&chromosome(1,150);
    a76=chromosome(1,151)&&chromosome(1,152);
    a77=chromosome(1,153)&&chromosome(1,154);
    a78=chromosome(1,155)&&chromosome(1,156);
    a79=chromosome(1,157)&&chromosome(1,158);
    a80=chromosome(1,159)&&chromosome(1,160);
    a81=chromosome(1,161)&&chromosome(1,162);
    a82=chromosome(1,163)&&chromosome(1,164);
    a83=chromosome(1,165)&&chromosome(1,166);
    a84=chromosome(1,167)&&chromosome(1,168);
    a85=chromosome(1,169)&&chromosome(1,170);
    a86=chromosome(1,171)&&chromosome(1,172);
    a87=chromosome(1,173)&&chromosome(1,174);
    a88=chromosome(1,175)&&chromosome(1,176);
    a89=chromosome(1,177)&&chromosome(1,178);
    a90=chromosome(1,179)&&chromosome(1,180);
    a91=chromosome(1,181)&&chromosome(1,182);
    a92=chromosome(1,183)&&chromosome(1,184);
    a93=chromosome(1,185)&&chromosome(1,186);
    a94=chromosome(1,187)&&chromosome(1,188);
    a95=chromosome(1,189)&&chromosome(1,190);
    a96=chromosome(1,191)&&chromosome(1,192);
    a97=chromosome(1,193)&&chromosome(1,194);
    a98=chromosome(1,195)&&chromosome(1,196);
    a99=chromosome(1,197)&&chromosome(1,198);
    a100=chromosome(1,199)&&chromosome(1,200);
    a101=chromosome(1,201)&&chromosome(1,202);
    a102=chromosome(1,203)&&chromosome(1,204);
    a103=chromosome(1,205)&&chromosome(1,206);
    a104=chromosome(1,207)&&chromosome(1,208);
    a105=chromosome(1,209)&&chromosome(1,210);
    a106=chromosome(1,211)&&chromosome(1,212);
    a107=chromosome(1,213)&&chromosome(1,214);
    a108=chromosome(1,215)&&chromosome(1,216);
    a109=chromosome(1,217)&&chromosome(1,218);
    a110=chromosome(1,219)&&chromosome(1,220);
    a111=chromosome(1,221)&&chromosome(1,222);
    a112=chromosome(1,223)&&chromosome(1,224);
    a113=chromosome(1,225)&&chromosome(1,226);
    a114=chromosome(1,227)&&chromosome(1,228);
    a115=chromosome(1,229)&&chromosome(1,230);
    a116=chromosome(1,231)&&chromosome(1,232);
    a117=chromosome(1,233)&&chromosome(1,234);
    a118=chromosome(1,235)&&chromosome(1,236);
    a119=chromosome(1,237)&&chromosome(1,238);
    a120=chromosome(1,239)&&chromosome(1,240);
    a121=chromosome(1,241)&&chromosome(1,242);
    a122=chromosome(1,243)&&chromosome(1,244);
    a123=chromosome(1,245)&&chromosome(1,246);
    a124=chromosome(1,247)&&chromosome(1,248);
    a125=chromosome(1,249)&&chromosome(1,250);
    a126=chromosome(1,251)&&chromosome(1,252);
    a127=chromosome(1,253)&&chromosome(1,254);
    a128=chromosome(1,255)&&chromosome(1,256);

    a129=128*((a1)&&(a2)&&(a3)&&(a4)&&(a5)&&(a6)&&(a7)&&(a8)&&(a9)&&(a10)&&(a11)&&(a12)&&(a13)&&(a14)&&(a15)&&(a16)&&(a17)&&(a18)&&(a19)&&(a20)&&(a21)&&(a22)&&(a23)&&(a24)&&(a25)&&(a26)&&(a27)&&(a28)&&(a29)&&(a30)&&(a31)&&(a32)&&(a33)&&(a34)&&(a35)&&(a36)&&(a37)&&(a38)&&(a39)&&(a40)&&(a41)&&(a42)&&(a43)&&(a44)&&(a45)&&(a46)&&(a47)&&(a48)&&(a49)&&(a50)&&(a51)&&(a52)&&(a53)&&(a54)&&(a55)&&(a56)&&(a57)&&(a58)&&(a59)&&(a60)&&(a61)&&(a62)&&(a63)&&(a64)&&(a65)&&(a66)&&(a67)&&(a68)&&(a69)&&(a70)&&(a71)&&(a72)&&(a73)&&(a74)&&(a75)&&(a76)&&(a77)&&(a78)&&(a79)&&(a80)&&(a81)&&(a82)&&(a83)&&(a84)&&(a85)&&(a86)&&(a87)&&(a88)&&(a89)&&(a90)&&(a91)&&(a92)&&(a93)&&(a94)&&(a95)&&(a96)&&(a97)&&(a98)&&(a99)&&(a100)&&(a101)&&(a102)&&(a103)&&(a104)&&(a105)&&(a106)&&(a107)&&(a108)&&(a109)&&(a110)&&(a111)&&(a112)&&(a113)&&(a114)&&(a115)&&(a116)&&(a117)&&(a118)&&(a119)&&(a120)&&(a121)&&(a122)&&(a123)&&(a124)&&(a125)&&(a126)&&(a127)&&(a128));

    cost=256-(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12+a13+a14+a15+a16+a17+a18+a19+a20+a21+a22+a23+a24+a25+a26+a27+a28+a29+a30+a31+a32+a33+a34+a35+a36+a37+a38+a39+a40+a41+a42+a43+a44+a45+a46+a47+a48+a49+a50+a51+a52+a53+a54+a55+a56+a57+a58+a59+a60+a61+a62+a63+a64+a65+a66+a67+a68+a69+a70+a71+a72+a73+a74+a75+a76+a77+a78+a79+a80+a81+a82+a83+a84+a85+a86+a87+a88+a89+a90+a91+a92+a93+a94+a95+a96+a97+a98+a99+a100+a101+a102+a103+a104+a105+a106+a107+a108+a109+a110+a111+a112+a113+a114+a115+a116+a117+a118+a119+a120+a121+a122+a123+a124+a125+a126+a127+a128+a129)	;

end
