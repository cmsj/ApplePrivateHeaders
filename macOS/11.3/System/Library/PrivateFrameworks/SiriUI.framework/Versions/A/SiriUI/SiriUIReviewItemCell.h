/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSTextField, NSView;

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {

	NSTextField* _commentLabel;
	NSTextField* _authorLabel;
	NSView* _ratingView;
	UIOffset _ratingOffset;
	long long _characterLimit;
	NSEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long characterLimit;                //@synthesize characterLimit=_characterLimit - In the implementation block
@property (assign,nonatomic) NSEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(long long)defaultCharacterLimit;
+(CGSize)sizeThatFits:(CGSize)arg1 withReview:(id)arg2 characterLimit:(long long)arg3 ;
+(id)_commentLabelFont;
+(id)_authorFontAttribute;
+(id)_displayTextForComment:(id)arg1 characterLimit:(long long)arg2 ;
+(NSEdgeInsets)_defaultEdgeInsets;
+(id)_authorDateFontAttribute;
-(void)prepareForReuse;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentInsets:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)contentInsets;
-(long long)characterLimit;
-(void)configureWithReview:(id)arg1 ratingView:(id)arg2 offset:(UIOffset)arg3 ;
-(void)_setComment:(id)arg1 ;
-(void)_setRatingView:(id)arg1 ;
-(void)_setAuthor:(id)arg1 andDate:(id)arg2 timeZoneId:(id)arg3 hasRatingView:(char)arg4 ;
-(id)_relativeStringFromDate:(id)arg1 ;
-(void)setCharacterLimit:(long long)arg1 ;
@end

