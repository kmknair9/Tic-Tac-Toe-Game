#include<iostream>
int main(){
  std::cout<<"\n Let's Start!!!\nTic - Tac - Toe\nX|O|X|\nO|X|O|\nO|X|O|\n";
  char arr[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
  std::cout<<"Know these positions to Play the Game!!!\n";
  std::cout<<"\nR1 | C1 | C2 | C3 |\nR2 | C1 | C2 | C3 |\nR3 | C1 | C2 | C3 |\n";
  for(int i = 0;i < 9;i++){
  int row; int column;char symbol;
  std::cout<<"Enter the position to Mark 'X' OR 'O'\nEnter 'R' Position from R1 to R3 and 'C' Position from C1 to C3\n";
  std::cout<<"Enter Row position: R";
  std::cin>>row;
   std::cout<<"Enter Column position: C";
  std::cin>>column;
  std::cout<<"Enter your symbol:";std::cin>>symbol;
 arr[row-1][column-1] = symbol;
  for(int i = 0; i < 3;i++){
    for(int j = 0;j < 3;j++){
      std::cout<<arr[i][j]<<"|";
    }
    std::cout<<"\n";
  }
  if(arr[row-1][column-1] == 'X' || arr[row-1][column-1] == 'O'){
  if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] != ' '){
  std::cout<<arr[0][0]<<" Won!!!";
  return 0;
}
else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] != ' '){
  std::cout<<arr[1][0]<<" is Won!!!";
  return 0;
}
else if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] != ' '){
  std::cout<<arr[2][0]<<" is Won!!!";
  return 0;
}
else if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] != ' '){
  std::cout<<arr[0][0]<<" is Won!!!";
  return 0;
}
else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] != ' '){
  std::cout<<arr[0][1]<<" is Won!!!";
  return 0;
}
else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] != ' '){
  std::cout<<arr[0][2]<<" is Won!!!";
  return 0;
}
else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' '){
  std::cout<<arr[0][0]<<" is Won!!!";
  return 0;
}
else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' '){
  std::cout<<arr[0][2]<<" is Won!!!";
  return 0;
}
}
else{
  std::cout<<"Wrong Symbol!!!! SHOULD BE 'X' OR 'O'!!!\nGame Over!!!\nPlay Again!!!\n";
  return 0;
  }
}
std::cout<<"Game Drawn!!! No Winners!!!\n";
return 0;
}
