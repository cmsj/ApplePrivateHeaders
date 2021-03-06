/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBOpenPunchoutCommand.h>
@class _SFPBPunchout, NSData;


@protocol _SFPBOpenPunchoutCommand <NSObject>
@property (nonatomic,retain) _SFPBPunchout * punchout; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(_SFPBPunchout *)punchout;
-(void)setPunchout:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBPunchout, NSData, NSString;

@interface _SFPBOpenPunchoutCommand : PBCodable <_SFPBOpenPunchoutCommand, NSSecureCoding> {

	_SFPBPunchout* _punchout;

}

@property (nonatomic,retain) _SFPBPunchout * punchout;              //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(_SFPBPunchout *)punchout;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
@end

