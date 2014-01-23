//
//  ViewController.h
//  StopWatch
//
//  Created by 川原口　高太郎 on 14/01/23.
//  Copyright (c) 2014年 Univercity of Kitakyushu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    IBOutlet UILabel *time;
    
    NSTimer *timeTicker;
}

//@property(nonatomic, retain) UILabel *time;

-(IBAction) strart:(id) sender;
-(IBAction) stop:(id) sender;
-(IBAction) clear:(id) sender;

-(void)showActivity;

@end
