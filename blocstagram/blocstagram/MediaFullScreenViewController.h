//
//  MediaFullScreenViewController.h
//  blocstagram
//
//  Created by YooJin Hong on 1/20/16.
//  Copyright © 2016 YooJin Hong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end
