/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol GSAdditionStoring
@property (retain) NSURL * documentURL; 
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@required
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(id)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSURL *)documentURL;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(char)arg2 creationInfo:(id)arg3 error:(id*)arg4;
-(void)cleanupStagingURL:(id)arg1;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
-(void)setDocumentURL:(id)arg1;
-(char)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
-(id)URLforReplacingItemWithError:(id*)arg1;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1;
-(char)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;

@end

