//
//  ExampleLineGraph.h
//  GraphKit
//
//  Created by Michal Konturek on 21/04/2014.
//  Copyright (c) 2014 Michal Konturek. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GKLineGraph.h"

@interface ExampleLineGraph : UIViewController<GKLineGraphDataSource>

@property (nonatomic, weak) IBOutlet GKLineGraph *graph;

@property (nonatomic, strong) NSArray *data;

@end