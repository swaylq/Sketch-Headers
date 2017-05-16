//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSColor.h"

#import "MSAsset.h"
#import "MSColor.h"

@class NSString;

@interface MSColor : _MSColor <MSAsset, MSColor>
{
}

+ (id)rgbColorRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3;
+ (id)colorWithNSColor:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRGBADictionary:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (BOOL)fuzzyIsEqual:(id)arg1;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double hue;
- (id)HSBColor;
@property(readonly, copy) NSString *description;
- (id)NSColorWithColorSpace:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithImmutableObject:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)treeAsDictionary;
- (id)scaledColor:(double)arg1;
- (id)RGBADictionary;
- (BOOL)isAssetEqual:(id)arg1;
- (unsigned long long)assetType;

// Remaining properties
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) double green;
@property(readonly, nonatomic) double red;
@property(readonly) Class superclass;

@end

