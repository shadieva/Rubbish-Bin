Length  =   500;
Width   =   500;
Height  =   800;
Wall    =   20;
 color("pink")
difference(){
  cube([Length,Width,Height]);
  translate([Wall,Wall,Wall]){ 
    cube([Length-(Wall*2),Width-(Wall*2),Height]);
  }
}
translate([0,Width+100,0]){
    color("pink")
union(){
  cube([Length,Width,Wall]);
    color("pink")
  translate([Wall,Wall,0]){ 
    cube([Length-(Wall*2),Width-(Wall*2),Wall+2]);
    }
  }
}
