/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIAccessoryViewController.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class SFPunchout, SearchUIButton, TLKLabel, NSString, NSArray;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate> {

	SFPunchout* _punchout;
	SearchUIButton* _playButton;
	TLKLabel* _captionLabel;
	NSString* _spotlightIdentifier;
	NSArray* _storeIdentifiers;

}

@property (nonatomic,retain) SFPunchout * punchout;                       //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,retain) SearchUIButton * playButton;                 //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) TLKLabel * captionLabel;                     //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) NSString * spotlightIdentifier;              //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * storeIdentifiers;                  //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)font;
+(char)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(NSArray *)storeIdentifiers;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(id)setupView;
-(SearchUIButton *)playButton;
-(void)setPlayButton:(SearchUIButton *)arg1 ;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)spotlightIdentifier;
-(TLKLabel *)captionLabel;
-(void)setCaptionLabel:(TLKLabel *)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)buttonPressed;
-(char)shouldTopAlignForAccessibilityContentSizes;
-(void)sendEngagementDidPunchout:(char)arg1 ;
@end

