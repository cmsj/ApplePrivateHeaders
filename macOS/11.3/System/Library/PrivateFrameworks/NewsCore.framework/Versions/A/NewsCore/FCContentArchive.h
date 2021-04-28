/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FCContentManifest;

@interface FCContentArchive : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,copy,readonly) FCContentManifest * manifest; 
+(char)supportsSecureCoding;
+(id)archiveWithRecord:(id)arg1 ;
+(id)archiveWithAsset:(id)arg1 remoteURL:(id)arg2 filePath:(id)arg3 ;
+(id)archiveWithAssetWrappingKey:(id)arg1 wrappingKeyID:(id)arg2 ;
+(id)archiveWithAVAsset:(id)arg1 ;
+(id)archiveWithAVAssetKey:(id)arg1 ;
+(id)archiveWithPersistedArchivePath:(id)arg1 ;
+(id)archiveWithChildArchives:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FCContentManifest *)manifest;
-(id)unarchiveIntoContentContext:(id)arg1 ;
@end
