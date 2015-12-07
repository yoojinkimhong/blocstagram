//
//  MediaTableViewCell.h
//  blocstagram
//
//  Created by YooJin Hong on 12/6/15.
//  Copyright © 2015 YooJin Hong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

// *** NOTE *** This violates MVC and as a result is very bad coding practice - the view should NOT have a reference to the model - this creates an unwanted dependency.
@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat)heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
