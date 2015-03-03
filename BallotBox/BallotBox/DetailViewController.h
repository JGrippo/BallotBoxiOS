//
//  DetailViewController.h
//  BallotBox
//
//  Created by james grippo on 3/3/15.
//  Copyright (c) 2015 james grippo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

