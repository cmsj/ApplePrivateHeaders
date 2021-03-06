/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDThemeBitSource, TDTemplateRenderingMode;

@interface TDAsset : NSManagedObject {

	unsigned _scaleFactor;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) TDThemeBitSource * source; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,retain) TDTemplateRenderingMode * templateRenderingMode; 
+(unsigned)scaleFactorFromImageFilename:(id)arg1 ;
+(char)isTemplateFromImageFilename:(id)arg1 ;
+(long long)subtypeFromImageFilename:(id)arg1 ;
+(long long)idiomFromImageFilename:(id)arg1 ;
+(id)_filenameRegex;
-(void)setScaleFactor:(unsigned)arg1 ;
-(unsigned)scaleFactor;
-(NSString *)baseName;
-(id)sourceRelativePath;
-(char)hasProduction;
-(id)fileURLWithDocument:(id)arg1 ;
-(id)_sourceRelativePathComponents;
-(void)setHasProduction:(id)arg1 ;
@end

