/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSURL;

@interface INFile : NSObject <INEnumerable, INJSONSerializable, NSSecureCoding> {

	NSData* _memoryMappedFileData;
	char _deletesFileOnDeallocationIfNeeded;
	NSData* _data;
	NSString* _filename;
	NSURL* _fileURL;
	NSString* _typeIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char _hasAssociatedAuditToken; 
@property (assign,setter=_setMarkedForDeletionOnDeallocation:,getter=_isMarkedForDeletionOnDeallocation,nonatomic) char _markedForDeletionOnDeallocation; 
@property (assign,setter=_setDeletesFileOnDeallocationIfNeeded:,nonatomic) char _deletesFileOnDeallocationIfNeeded;                                                    //@synthesize deletesFileOnDeallocationIfNeeded=_deletesFileOnDeallocationIfNeeded - In the implementation block
@property (assign,setter=_setAssociatedAuditToken:,nonatomic) SCD_Struct_IN2 _associatedAuditToken; 
@property (readonly) char _isFileURLBased; 
@property (copy,readonly) NSData * data;                                                                                                                               //@synthesize data=_data - In the implementation block
@property (copy) NSString * filename;                                                                                                                                  //@synthesize filename=_filename - In the implementation block
@property (copy,readonly) NSString * typeIdentifier;                                                                                                                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (readonly) NSURL * fileURL;                                                                                                                                  //@synthesize fileURL=_fileURL - In the implementation block
+(void)initialize;
+(char)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 ;
+(id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(char)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)_deletesFileOnDeallocationIfNeeded;
-(id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 ;
-(char)_isFileURLBased;
-(char)_hasAssociatedAuditToken;
-(char)_isMarkedForDeletionOnDeallocation;
-(void)_setMarkedForDeletionOnDeallocation:(char)arg1 ;
-(char)_associatedAuditTokenIsEqualToAuditToken:(SCD_Struct_IN2)arg1 ;
-(SCD_Struct_IN2)_associatedAuditToken;
-(void)_setAssociatedAuditToken:(SCD_Struct_IN2)arg1 ;
-(void)_setDeletesFileOnDeallocationIfNeeded:(char)arg1 ;
@end

