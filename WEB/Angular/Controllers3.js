<html>
<script src="https://ajax.googleapis.com/ajax/libs/angularjs/1.6.9/angular.min.js"></script>
<body>
<div ng-app="myApp" ng-controller="namesCtrl"> 
<ul>
  <li ng-repeat="x in names">
  {{ x.name + ', ' + x.country }}
  </li>
</ul>
</div>
<script src="personController.js"></script>
</body>
</html>
