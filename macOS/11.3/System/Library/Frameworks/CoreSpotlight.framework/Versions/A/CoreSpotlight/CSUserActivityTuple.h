/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSIndexQueuableItem.h>

@class CSUserAction, CSSearchableItem, NSString;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem> {

	CSUserAction* _action;
	CSSearchableItem* _item;
	NSString* _protectionClass;

}

@property (retain) CSUserAction * action;                   //@synthesize action=_action - In the implementation block
@property (retain) CSSearchableItem * item;                 //@synthesize item=_item - In the implementation block
@property (retain) NSString * protectionClass;              //@synthesize protectionClass=_protectionClass - In the implementation block
-(id)description;
-(CSUserAction *)action;
-(void)setAction:(CSUserAction *)arg1 ;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(CSSearchableItem *)item;
-(NSString *)protectionClass;
-(void)setProtectionClass:(NSString *)arg1 ;
-(id)searchableItem;
-(void)updateWithItem:(id)arg1 ;
-(id)initWithAction:(id)arg1 item:(id)arg2 ;
@end

