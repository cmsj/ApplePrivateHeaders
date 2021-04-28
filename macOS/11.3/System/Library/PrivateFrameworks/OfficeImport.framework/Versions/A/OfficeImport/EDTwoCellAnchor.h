/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	char mIsRelative;
	int mEditAs;

}
-(id)init;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(EDCellAnchorMarker)from;
-(EDCellAnchorMarker)to;
-(char)isRelative;
-(void)setRelative:(char)arg1 ;
-(int)editAs;
-(void)setEditAs:(int)arg1 ;
@end
