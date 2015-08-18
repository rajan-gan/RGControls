//
//  DataViewController.h
//  RGPages
//
//  Created by Rajarajan Ganesan on 8/18/15.
//  Copyright (c) 2015 Mount Sinai Health System. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

