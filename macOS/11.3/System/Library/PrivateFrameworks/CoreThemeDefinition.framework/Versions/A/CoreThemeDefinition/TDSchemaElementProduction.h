/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDSimpleArtworkElementProduction.h>

@class NSString, NSOrderedSet;

@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction

@property (nonatomic,retain) NSString * folderName; 
@property (nonatomic,retain) NSOrderedSet * slices; 
-(id)relativePath;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(void)generateNewRendition;
@end
