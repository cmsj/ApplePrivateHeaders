/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject {

	char _writeOK;
	NSString* _action;
	NSString* _arguments;
	NSString* _metadata;
	NSString* _recordKey;
	NSString* _databasePath;
	_DPStorage* _storage;

}

@property (nonatomic,readonly) _DPStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) char writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)supportedCommands;
+(id)supportedMetadataKeys;
+(id)command:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(char)arg6 ;
-(id)description;
-(id)init;
-(_DPStorage *)storage;
-(NSString *)action;
-(NSString *)arguments;
-(char)executeCommand;
-(NSString *)databasePath;
-(NSString *)metadata;
-(NSString *)recordKey;
-(id)initWithAction:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(char)arg6 ;
-(char)recordNumbers:(id)arg1 forKey:(id)arg2 ;
-(char)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(char)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(char)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(char)recordWords:(id)arg1 forKey:(id)arg2 ;
-(id)queryForKey:(id)arg1 ;
-(char)submitRecordsForKey:(id)arg1 ;
-(char)listReportsFor:(id)arg1 ;
-(char)listKeys;
-(char)writeOK;
@end

