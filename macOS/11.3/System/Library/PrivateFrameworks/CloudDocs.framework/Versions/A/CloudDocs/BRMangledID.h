/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _mangledIDString;

}

@property (nonatomic,readonly) char isShared; 
@property (nonatomic,readonly) char isPrivate; 
@property (nonatomic,readonly) char isCloudDocsMangledID; 
@property (nonatomic,readonly) char isPassbookMangledID; 
@property (nonatomic,readonly) char isDesktopMangledID; 
@property (nonatomic,readonly) char isDocumentsMangledID; 
@property (nonatomic,readonly) NSString * appLibraryOrZoneName; 
@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) NSString * mangledIDString;                         //@synthesize mangledIDString=_mangledIDString - In the implementation block
@property (nonatomic,readonly) NSString * aliasTargetContainerString; 
+(char)supportsSecureCoding;
+(id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(char)arg3 ;
+(char)validateContainerID:(id)arg1 ;
+(id)_privateMangledContainerID:(id)arg1 validate:(char)arg2 ;
+(char)validateMangledIDString:(id)arg1 ;
+(id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(char)arg2 ;
+(id)_privateUnmangledContainerID:(id)arg1 validate:(char)arg2 ;
+(id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(char)arg2 ;
+(char)validateOwnerName:(id)arg1 ;
+(id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(char)arg3 ;
+(id)_containerIDFromSharedContainerID:(id)arg1 validate:(char)arg2 ;
+(id)cloudDocsMangledID;
+(id)desktopMangledID;
+(id)documentsMangledID;
+(id)sideCarMangledID;
+(id)zoneHealthMangledID;
+(id)containerMetadataMangledID;
+(id)sharedDatabaseMangledID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isShared;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(NSString *)ownerName;
-(id)initWithRecordZoneID:(id)arg1 ;
-(id)initWithAppLibraryName:(id)arg1 ;
-(NSString *)mangledIDString;
-(char)isEqualToMangledID:(id)arg1 ;
-(NSString *)aliasTargetContainerString;
-(id)initWithMangledString:(id)arg1 ;
-(id)initWithAliasTargetContainerString:(id)arg1 ;
-(char)isPrivate;
-(char)isCloudDocsMangledID;
-(char)isPassbookMangledID;
-(char)isDesktopMangledID;
-(char)isDocumentsMangledID;
-(NSString *)appLibraryOrZoneName;
@end

