/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPZone, NSMutableArray;

@interface CPSpacerFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	CGRect zoneBounds;
	CGRect textBounds;
	SCD_Struct_CP31* spacerSequence;
	NSMutableArray* spacers;
	unsigned segmentationCount;
	SCD_Struct_CP32* segmentations;
	SCD_Struct_CP33* qualityEntries;

}
-(void)finalize;
-(void)dealloc;
-(void)dispose;
-(id)spacers;
-(id)initWithContentZone:(id)arg1 ;
-(void)findSpacers;
-(void)splitTextLines;
-(void)initializeSegmentations;
-(void)initializeJunctions;
-(void)assessQuality;
-(void)determineValidity;
@end

