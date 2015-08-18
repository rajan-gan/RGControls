//
//  ModelController.h
//  RGPages
//
//  Created by Rajarajan Ganesan on 8/18/15.
//  Copyright (c) 2015 Mount Sinai Health System. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

