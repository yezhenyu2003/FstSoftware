/* $Id: StFstDbMaker.h,v */

#ifndef StFstDbMaker_hh
#define StFstDbMaker_hh

#include "StMaker.h"

class StFstDb;


/**
 * FST calibration/geometry DBs access maker.
 *
 * \author Shenghui Zhang
 * \date Oct. 2021
 */
class StFstDbMaker : public StMaker
{
public:
   StFstDbMaker(const char *name = "fstDb");
   virtual Int_t Init();
   Int_t  InitRun(Int_t runNumber);
   Int_t  Make();

   virtual const char *GetCVS() const
   {static const char cvs[] = "Tag $Name: SL20a $ $Id: StFstDbMaker.h,v 1.23 2015/02/04 07:56:20 smirnovd Exp $ built " __DATE__ " " __TIME__ ; return cvs;}

private:
   /// See StFstDb for details on created data structure. The ownership is passed to the STAR
   /// framework via ToWhiteBoard()
   StFstDb *mFstDb;
   Int_t mReady;

   ClassDef(StFstDbMaker, 0)
};

#endif


/***************************************************************************
* StFstDbMaker.h,v 1.0
* Revision 1.0 2021/10/18 Shenghui Zhang
* Initial version
****************************************************************************/
