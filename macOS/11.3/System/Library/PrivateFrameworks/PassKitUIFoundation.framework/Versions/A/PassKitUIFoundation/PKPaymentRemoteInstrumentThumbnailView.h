/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/Versions/A/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <AppKit/NSView.h>

@class NSImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : NSView {

	NSImageView* _placeholderImageView;
	NSImageView* _cardImageView;

}

@property (nonatomic,retain) NSImageView * placeholderImageView;              //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) NSImageView * cardImageView;                     //@synthesize cardImageView=_cardImageView - In the implementation block
-(id)initWithRemotePaymentInstrument:(id)arg1 ;
-(void)_prepareConstraints;
-(void)setPlaceholderImageView:(NSImageView *)arg1 ;
-(NSImageView *)placeholderImageView;
-(NSImageView *)cardImageView;
-(void)_updateCardImage:(CGImageRef)arg1 ;
-(void)setCardImageView:(NSImageView *)arg1 ;
@end

