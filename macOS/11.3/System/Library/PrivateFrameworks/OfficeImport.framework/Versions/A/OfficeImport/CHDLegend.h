/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADGraphicProperties, EDCollection, EDResources, NSArray;

@interface CHDLegend : NSObject {

	int mLegendPosition;
	OADGraphicProperties* mGraphicProperties;
	unsigned long long mFontIndex;
	EDCollection* mLegendEntries;
	EDResources* mResources;
	BOOL mIsVertical;
	BOOL mIsOverlay;
	NSArray* mLabelEffects;

}
-(id)description;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)graphicProperties;
-(int)legendPosition;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(void)setLabelEffects:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLegendPosition:(int)arg1 ;
-(void)setIsSingleColumnLegend:(BOOL)arg1 ;
-(unsigned long long)fontIndex;
-(id)labelEffects;
-(id)legendEntries;
-(BOOL)isSingleColumnLegend;
-(BOOL)isOverlay;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isAutoSizeAndPosition;
@end

