//
//  DetailViewController.h
//  Designable example
//
//  Created by Mustafa Kamal Ismail Ahmed on 1/20/15.
//  Copyright (c) 2015 MKTechnoogies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

