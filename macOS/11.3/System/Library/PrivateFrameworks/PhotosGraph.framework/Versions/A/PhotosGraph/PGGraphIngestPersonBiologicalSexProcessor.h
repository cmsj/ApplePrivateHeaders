/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestPersonBiologicalSexProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)processPersonBiologicalSexForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(/*^block*/id)arg3 ;
-(void)_writeBiologicalSexByPerson:(id)arg1 toPhotoLibrary:(id)arg2 ;
-(unsigned short)_phBiologicalSexFromIngestBiologicalSex:(unsigned long long)arg1 ;
-(unsigned long long)_sexForPersonNode:(id)arg1 graph:(id)arg2 ;
-(unsigned long long)sexForFaces:(id)arg1 personDescription:(id)arg2 ;
-(id)_sexDescriptionForBiologicalSex:(unsigned long long)arg1 ;
@end

