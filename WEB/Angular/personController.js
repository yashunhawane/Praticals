angular.module('myApp', []).controller('namesCtrl', function($scope) {
    $scope.names = [
      {name:'Siddharth',country:'Japan'},
      {name:'Heer',country:'Kenya'},
      {name:'Aakash',country:'India'}
    ];
  });