//
//  DataSource.h
//  blocstagram
//
//  Created by YooJin Hong on 12/6/15.
//  Copyright © 2015 YooJin Hong. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item;


+ (instancetype)sharedInstance;

- (void)removeMediaItemsAtIndex:(NSInteger)index;



@end
