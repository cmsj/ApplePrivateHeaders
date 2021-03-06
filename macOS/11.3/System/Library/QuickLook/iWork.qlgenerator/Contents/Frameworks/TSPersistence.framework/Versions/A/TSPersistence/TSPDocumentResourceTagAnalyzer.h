/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _tagsToDocumentResourceInfosDictionary;
	NSMutableSet* _documentResourceInfos;
	NSMutableSet* _untaggedDocumentResourceInfos;

}

@property (nonatomic,copy,readonly) NSSet * allTags; 
@property (nonatomic,copy,readonly) NSSet * allDocumentResourceInfos; 
@property (nonatomic,copy,readonly) NSSet * untaggedDocumentResourceInfos; 
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSSet *)allTags;
-(void)addDocumentResourceInfo:(id)arg1 ;
-(id)minimumTagsWithPreferredTags:(id)arg1 ;
-(NSSet *)allDocumentResourceInfos;
-(NSSet *)untaggedDocumentResourceInfos;
@end

