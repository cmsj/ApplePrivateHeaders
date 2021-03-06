/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPDecoderReadCoordinatorDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@required
-(long long)sourceType;
-(unsigned long long)fileFormatVersion;
-(char)hasDocumentVersionUUID;
-(char)isCrossAppPaste;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1;
-(char)isCrossDocumentPaste;
-(char)canResolveExternalReferences;
-(char)processMetadataObject:(id)arg1 error:(id*)arg2;
-(id)rootObjectComponent;
-(char)isDecodingTransientObject;
-(id)cachedMetadataObject;
-(id)metadataComponent;
-(char)shouldResolveExternalReferencesUsingObjectUUID;
-(id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
-(id)cachedDataForIdentifier:(long long)arg1;
-(id)dataInfoForIdentifier:(long long)arg1;
-(char)shouldDecodeMissingDataAsRemote;

@end

