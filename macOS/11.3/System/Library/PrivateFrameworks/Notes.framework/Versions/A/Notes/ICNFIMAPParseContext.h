/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICNFIMAPConnection, ICNFIMAPResponse, NSData;

@interface ICNFIMAPParseContext : NSObject {

	const char* _start;
	const char* _end;
	char _invalid;
	ICNFIMAPConnection* _connection;
	ICNFIMAPResponse* _response;
	NSData* _data;

}

@property (nonatomic,retain) ICNFIMAPConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) ICNFIMAPResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) char invalid;                                 //@synthesize invalid=_invalid - In the implementation block
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(ICNFIMAPConnection *)connection;
-(void)setConnection:(ICNFIMAPConnection *)arg1 ;
-(ICNFIMAPResponse *)response;
-(char)invalid;
-(void)setResponse:(ICNFIMAPResponse *)arg1 ;
-(void)setInvalid:(char)arg1 ;
-(void)_parseBasicResponse;
-(char)_consumeSpaces;
-(void)_parseWarning:(id)arg1 ;
-(void)_createResponseWithoutTag:(char)arg1 ;
-(id)_newIMAPAtom:(long long)arg1 ;
-(void)_parseError:(id)arg1 ;
-(char)_number:(unsigned*)arg1 ;
-(void)_createResponseUsingMask:(unsigned long long)arg1 ;
-(void)_parseCapabilityResponse;
-(void)_parseFlagsResponse;
-(void)_parseIDResponse;
-(void)_parseListResponse;
-(void)_parseNamespaceResponse;
-(void)_parseQuotaResponse;
-(void)_parseQuotaRootResponse;
-(void)_parseSearchResponse;
-(void)_parseStatusResponse;
-(void)_parseFetchResponse;
-(void)_parseOtherResponse;
-(id)_newArray;
-(id)_newCapabilityArray;
-(id)_newFlagsSet;
-(id)_newNumber;
-(id)_newMessageSetWithoutStar;
-(id)_newModificationSequenceValue;
-(id)_newQuotedStringUsingCaseOption:(long long)arg1 ;
-(id)_newBodyData:(char)arg1 ;
-(id)_newBodystructure;
-(char)_modificationSequenceValue:(unsigned long long*)arg1 ;
-(id)_newIDDictionary;
-(id)_newNstring;
-(id)_newMailboxWithSeparatorChar:(id)arg1 ;
-(id)_newNamespace;
-(id)_newLiteralStringUsingCaseOption:(long long)arg1 ;
-(id)_newAsString;
-(id)_newStatusAttList;
-(id)_newStringUsingCaseOption:(long long)arg1 ;
-(id)_newLiteral;
-(id)_newArrayAllowingNulls:(char)arg1 ;
-(id)_newStringWithSingleQuotedCharacter;
-(id)_newNamespaceExtension;
-(id)initWithConnection:(id)arg1 data:(id)arg2 ;
-(id)parseIntoResponse;
@end

