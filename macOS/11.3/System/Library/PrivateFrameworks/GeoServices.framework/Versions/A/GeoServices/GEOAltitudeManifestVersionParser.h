/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSURL, GEOFlyoverRegionVersions, NSError, NSString;

@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate> {

	GEOOnce_s _parsed;
	NSURL* _fileURL;
	GEOFlyoverRegionVersions* _versions;
	NSError* _parseError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)parse:(id*)arg1 ;
@end

