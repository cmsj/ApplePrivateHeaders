/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUIThreeButtonGadget.h>

@interface EKUISendRevertGadget : EKUIThreeButtonGadget
+(id)showTitle;
+(id)showOriginalTitle;
+(id)deleteTitle;
+(id)revertTitle;
+(id)proposeTitle;
+(id)cancelTitle;
+(id)forwardTitle;
+(id)replyTitle;
+(id)sendTitle;
+(id)updateTitle;
+(id)applyTitle;
-(char)shouldDisplay;
-(id)firstButtonTitle;
-(id)secondButtonTitle;
-(id)thirdButtonTitle;
-(char)_useDeleteButton;
-(char)_useReplyButton;
-(char)_useSendButton;
-(char)_useUpdateButton;
-(char)_useApplyButton;
-(char)_useRevertButton;
-(char)_useProposeButton;
-(char)_useCancelProposalButton;
-(char)_useForwardButton;
-(id)firstButtonTitles;
-(id)secondButtonTitles;
-(id)thirdButtonTitles;
-(void)firstButtonClicked:(id)arg1 ;
-(void)secondButtonClicked:(id)arg1 ;
-(void)thirdButtonClicked:(id)arg1 ;
@end
