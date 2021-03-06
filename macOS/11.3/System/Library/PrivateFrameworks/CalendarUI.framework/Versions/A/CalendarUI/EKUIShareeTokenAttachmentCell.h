/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUITokenAttachmentCell.h>

@class EKUIShareesGadget;

@interface EKUIShareeTokenAttachmentCell : EKUITokenAttachmentCell {

	EKUIShareesGadget* _shareeGadget;

}

@property (retain) EKUIShareesGadget * shareeGadget;              //@synthesize shareeGadget=_shareeGadget - In the implementation block
-(id)initCellForTokenField:(id)arg1 ;
-(char)shouldShowToken;
-(id)imageForRepresentedObject;
-(id)stringForRepresentedObject;
-(EKUIShareesGadget *)shareeGadget;
-(void)setShareeGadget:(EKUIShareesGadget *)arg1 ;
@end

