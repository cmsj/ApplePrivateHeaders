/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAssociatedMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessageEditChatItem : IMAssociatedMessageChatItem <IMVisibleAssociatedMessageHost> {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,retain,readonly) NSAttributedString * editedBody; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)visibleAssociatedMessageChatItems;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(NSAttributedString *)editedBody;
@end
