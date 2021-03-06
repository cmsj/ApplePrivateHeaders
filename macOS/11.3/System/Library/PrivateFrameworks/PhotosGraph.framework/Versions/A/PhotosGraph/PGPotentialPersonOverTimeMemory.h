/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _bestAssetLocalIdentifiers;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (readonly) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSArray * bestAssetLocalIdentifiers;               //@synthesize bestAssetLocalIdentifiers=_bestAssetLocalIdentifiers - In the implementation block
-(id)uuid;
-(PGGraphPersonNode *)personNode;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(NSArray *)bestAssetLocalIdentifiers;
-(void)setBestAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

