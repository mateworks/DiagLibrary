/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).  Version: 6.6.2-pre4, Date: 04-Apr-2013.
 */
#include "TS24011IES.h"
#include "rtxsrc/rtxCommon.h"
#include "rtxsrc/rtxBitDecode.h"
#include "rtxsrc/rtxIntDecode.h"
#include "rtxsrc/rtx3GPP.h"
#include "rtxsrc/rtxDiagBitTrace.h"

EXTERN int NASDec_TS24011IE_CPUserData (OSCTXT* pctxt
   , TS24011IE_CPUserData* pvalue)
{
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CPUserData");

   /* Decode OCTET STRING value */
   RTDIAG_NEWBITFIELD (pctxt, "OCTET STRING");

   ret = rtxDecBitsToByte (pctxt, &pvalue->numocts, 8);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   ret = rtxReadBytes (pctxt, pvalue->data, pvalue->numocts);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   if (!(pvalue->numocts <= 249)) {
      rtxErrAddElemNameParm (pctxt);
      rtxErrAddIntParm (pctxt, (int)pvalue->numocts);
      return LOG_RTERR (pctxt, RTERR_CONSVIO);
   }

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}

EXTERN int NASDec_TS24011IE_RPAddress (OSCTXT* pctxt
   , TS24011IE_RPAddress* pvalue)
{
   OSSIZE endIndex;
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "RPAddress");

   /* decode length */

   RTXCTXTPUSHELEMNAME (pctxt, "length");
   RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

   ret = rtxReadBytes (pctxt, &pvalue->length, 1);
   if (0 != ret) return LOG_RTERR (pctxt, ret);
   if (!((pvalue->length <= OSUINTCONST(11)))) {
      rtxErrAddElemNameParm (pctxt);
      rtxErrAddIntParm (pctxt, (int)pvalue->length);
      return LOG_RTERR (pctxt, RTERR_CONSVIO);
   }

   endIndex = pctxt->buffer.byteIndex + pvalue->length;

   RTDIAG_SETBITFLDCOUNT (pctxt);
   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode ext */

   RTXCTXTPUSHELEMNAME (pctxt, "ext");

   RTDIAG_NEWBITFIELD (pctxt, "BOOLEAN");

   ret = rtxDecBit (pctxt, &pvalue->ext);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode typeOfNumber */

   RTXCTXTPUSHELEMNAME (pctxt, "typeOfNumber");

   RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

   ret = rtxDecBitsToByte (pctxt, &pvalue->typeOfNumber, 3);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode numberingPlanID */

   RTXCTXTPUSHELEMNAME (pctxt, "numberingPlanID");

   RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

   ret = rtxDecBitsToByte (pctxt, &pvalue->numberingPlanID, 4);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode number */

   RTXCTXTPUSHELEMNAME (pctxt, "number");

   ret = NASDec_TS24008IE_TBCDString (pctxt, &pvalue->number, pvalue->length-1
      );
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}

EXTERN int NASDec_TS24011IE_RPOriginatorAddress (OSCTXT* pctxt
   , TS24011IE_RPOriginatorAddress* pvalue)
{
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "RPOriginatorAddress");

   ret = NASDec_TS24011IE_RPAddress (pctxt, pvalue);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}

EXTERN int NASDec_TS24011IE_RPDestinationAddress (OSCTXT* pctxt
   , TS24011IE_RPDestinationAddress* pvalue)
{
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "RPDestinationAddress");

   ret = NASDec_TS24011IE_RPAddress (pctxt, pvalue);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}

EXTERN int NASDec_TS24011IE_RPUserData (OSCTXT* pctxt
   , TS24011IE_RPUserData* pvalue)
{
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "RPUserData");

   /* Decode OCTET STRING value */
   RTDIAG_NEWBITFIELD (pctxt, "OCTET STRING");

   ret = rtxDecBitsToByte (pctxt, &pvalue->numocts, 8);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   ret = rtxReadBytes (pctxt, pvalue->data, pvalue->numocts);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   if (!(pvalue->numocts <= 233)) {
      rtxErrAddElemNameParm (pctxt);
      rtxErrAddIntParm (pctxt, (int)pvalue->numocts);
      return LOG_RTERR (pctxt, RTERR_CONSVIO);
   }

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}

EXTERN int NASDec_TS24011IE_CPCauseValue (OSCTXT* pctxt
   , TS24011IE_CPCauseValue* pvalue)
{
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CPCauseValue");

   /* decode ext */

   RTXCTXTPUSHELEMNAME (pctxt, "ext");

   RTDIAG_NEWBITFIELD (pctxt, "BOOLEAN");

   ret = rtxDecBit (pctxt, &pvalue->ext);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   /* decode value */

   RTXCTXTPUSHELEMNAME (pctxt, "value");

   RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

   ret = rtxDecBitsToByte (pctxt, &pvalue->value, 7);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}

EXTERN int NASDec_TS24011IE_RPCauseElem (OSCTXT* pctxt
   , TS24011IE_RPCauseElem* pvalue)
{
   OSSIZE endIndex;
   int ret = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "RPCauseElem");

   /* decode length */

   RTXCTXTPUSHELEMNAME (pctxt, "length");
   RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

   ret = rtxReadBytes (pctxt, &pvalue->length, 1);
   if (0 != ret) return LOG_RTERR (pctxt, ret);
   if (!((pvalue->length >= OSUINTCONST(1) && pvalue->length <= OSUINTCONST(2)))) {
      rtxErrAddElemNameParm (pctxt);
      rtxErrAddIntParm (pctxt, (int)pvalue->length);
      return LOG_RTERR (pctxt, RTERR_CONSVIO);
   }

   endIndex = pctxt->buffer.byteIndex + pvalue->length;

   RTDIAG_SETBITFLDCOUNT (pctxt);
   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode ext */

   RTXCTXTPUSHELEMNAME (pctxt, "ext");

   RTDIAG_NEWBITFIELD (pctxt, "BOOLEAN");

   ret = rtxDecBit (pctxt, &pvalue->ext);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode causeValue */

   RTXCTXTPUSHELEMNAME (pctxt, "causeValue");

   RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

   ret = rtxDecBitsToByte (pctxt, &pvalue->causeValue, 7);
   if (ret < 0) return LOG_RTERR (pctxt, ret);

   RTDIAG_SETBITFLDCOUNT (pctxt);

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   /* decode diagField */

   RTXCTXTPUSHELEMNAME (pctxt, "diagField");

   {
      OSUINT8 i;
      for (i = 0; pctxt->buffer.byteIndex < endIndex; i++) {
         RTXCTXTPUSHARRAYELEMNAME (pctxt, "elem", i);

         RTDIAG_NEWBITFIELD (pctxt, "INTEGER");

         ret = rtxDecBitsToByte (pctxt, &pvalue->diagField.elem[i], 8);
         if (ret < 0) return LOG_RTERR (pctxt, ret);

         RTDIAG_SETBITFLDCOUNT (pctxt);

         RTXCTXTPOPARRAYELEMNAME (pctxt);

      }
      pvalue->diagField.n = i;
   }
   if (!(pvalue->diagField.n <= 1)) {
      rtxErrAddElemNameParm (pctxt);
      rtxErrAddIntParm (pctxt, (int)pvalue->diagField.n);
      return LOG_RTERR (pctxt, RTERR_CONSVIO);
   }

   RTXCTXTPOPELEMNAME (pctxt);

   if (pctxt->buffer.byteIndex >= endIndex) return 0;

   RTXCTXTPOPTYPENAME (pctxt);

   return (ret);
}
