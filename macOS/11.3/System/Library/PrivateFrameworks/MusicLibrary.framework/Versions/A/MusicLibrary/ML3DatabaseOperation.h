/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ML3MediaLibraryWriter, ML3ActiveTransaction, ML3MusicLibrary, ML3Client, NSDictionary, NSError;

@interface ML3DatabaseOperation : NSOperation {

	ML3MediaLibraryWriter* _writer;
	ML3ActiveTransaction* _transaction;
	char _beganNewTransaction;
	char _success;
	unsigned long long _type;
	ML3MusicLibrary* _library;
	ML3Client* _originatingClient;
	NSDictionary* _options;
	NSDictionary* _attributes;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) ML3Client * originatingClient;                     //@synthesize originatingClient=_originatingClient - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                           //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) ML3ActiveTransaction * transaction; 
@property (nonatomic,readonly) char success;                                    //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)databaseOperationForType:(unsigned long long)arg1 withLibrary:(id)arg2 writer:(id)arg3 ;
-(id)description;
-(unsigned long long)type;
-(NSError *)error;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)attributes;
-(void)main;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)success;
-(ML3ActiveTransaction *)transaction;
-(ML3MusicLibrary *)library;
-(void)setSuccess:(char)arg1 ;
-(char)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(char)_execute:(id*)arg1 ;
-(id)initWithLibrary:(id)arg1 writer:(id)arg2 ;
-(void)setOriginatingClient:(ML3Client *)arg1 ;
-(ML3Client *)originatingClient;
-(id)_operationTypeDescription;
@end

