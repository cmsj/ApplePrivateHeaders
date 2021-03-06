/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSString, WFFileType, NSItemProvider;

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass> {

	char _useNewLoadingAPI;
	NSString* _contentName;
	WFFileType* _fileURLType;

}

@property (nonatomic,retain) WFFileType * fileURLType;                     //@synthesize fileURLType=_fileURLType - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,copy) NSString * contentName;                         //@synthesize contentName=_contentName - In the implementation block
@property (assign,nonatomic) char useNewLoadingAPI;                        //@synthesize useNewLoadingAPI=_useNewLoadingAPI - In the implementation block
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1 ;
+(id)itemProviderTypeIdentifierOverrides;
-(id)name;
-(NSItemProvider *)itemProvider;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(char)cachesSupportedTypes;
-(id)outputTypes;
-(void)generateFileRepresentationWithNewAPI:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)generateObjectRepresentationWithNewAPI:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)preloadImportantItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)contentName;
-(void)setContentName:(NSString *)arg1 ;
-(char)useNewLoadingAPI;
-(void)setUseNewLoadingAPI:(char)arg1 ;
-(WFFileType *)fileURLType;
-(void)setFileURLType:(WFFileType *)arg1 ;
@end

