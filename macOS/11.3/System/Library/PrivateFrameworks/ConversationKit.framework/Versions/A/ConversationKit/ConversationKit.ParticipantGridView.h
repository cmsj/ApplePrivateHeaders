/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/Versions/A/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <AppKit/NSView.h>

@interface ConversationKit.ParticipantGridView : NSView {

	 participantViews;
	 unfocusedParticipantOverlay;
	 organicLayoutConfiguration;
	??? currentlyFocusedParticipantIdentifier;
	??? mostProminentParticipantIdentifier;
	 mostRecentAnimationIndex;
	 delegate;
	??? currentParticipantAnimationContextUUID;
	 cachedFrameSize;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
@end
