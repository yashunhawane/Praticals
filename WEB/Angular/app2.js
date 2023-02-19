var app = angular.module('formApp', []); 
app.controller('FormController', function($scope) { 
$scope.master = {}; 
$scope.save= function(employee) { 
$scope.master = angular.copy(employee); 
}; 
$scope.reset = function() { 
$scope.employee = angular.copy($scope.master); 
}; 
$scope.reset(); 
}); 