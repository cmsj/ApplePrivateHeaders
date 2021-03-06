/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSString;

@interface PHProject : PHAssetCollection {

	NSData* _projectExtensionData;
	NSDate* _creationDate;
	NSString* _projectExtensionIdentifier;
	NSString* _projectDocumentType;
	NSString* _projectRenderUuid;

}

@property (nonatomic,readonly) NSData * projectData; 
@property (nonatomic,readonly) NSString * projectExtensionIdentifier;              //@synthesize projectExtensionIdentifier=_projectExtensionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * projectDocumentType;                     //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,readonly) NSString * projectRenderUuid;                       //@synthesize projectRenderUuid=_projectRenderUuid - In the implementation block
@property (nonatomic,readonly) NSData * projectExtensionData;                      //@synthesize projectExtensionData=_projectExtensionData - In the implementation block
@property (nonatomic,readonly) char hasProjectPreview; 
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)identifierCode;
+(char)managedObjectSupportsTrashedState;
+(char)managedObjectSupportsPendingState;
+(char)managedObjectSupportsRejectedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchProjectsWithOptions:(id)arg1 ;
+(id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)creationDate;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(char)canPerformEditOperation:(long long)arg1 ;
-(char)canContainCustomKeyAssets;
-(char)hasProjectPreview;
-(NSData *)projectExtensionData;
-(NSData *)projectData;
-(NSString *)projectExtensionIdentifier;
-(NSString *)projectDocumentType;
-(NSString *)projectRenderUuid;
@end

