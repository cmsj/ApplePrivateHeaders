/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/Versions/A/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSCollectionViewItem.h>

@class _TtC15ConversationKit15ParticipantView, NSString;

@interface ConversationKit.ParticipantCell : NSCollectionViewItem {

	??? participantIdentifier;
	 participantView;
	 accessibilityDisplayName;

}

@property (readonly,nonatomic) _TtC15ConversationKit15ParticipantView * participantView; 
@property (copy,nonatomic) NSString * accessibilityDisplayName; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(_TtC15ConversationKit15ParticipantView *)participantView;
-(NSString *)accessibilityDisplayName;
-(void)setAccessibilityDisplayName:(NSString *)arg1 ;
@end

